<?php

/**
 * Configuration form GA4.
 * Powereb by Giuseppe D'Ambrosio at Noahdambrosio.com https://noahdambrosio.com

 */
function ga4_tag_admin_form($form, &$form_state) {
  $form['ga4_tag_measurement_id'] = array(
    '#type' => 'textfield',
    '#title' => t('GA4 Measurement ID'),
    '#default_value' => variable_get('ga4_tag_measurement_id', ''),
    '#description' => t('Inserisci il tuo Measurement ID di Google Analytics 4, es. G-D99ZZCQ32S. Lascia vuoto per disabilitare.'),
    '#required' => FALSE,
  );

  return system_settings_form($form);
}
